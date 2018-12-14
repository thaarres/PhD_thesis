void looseSel_Jet_2_tau_2()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Sep  5 11:27:08 2018) by ROOT version6.02/05
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.16);
   c1->SetRightMargin(0.02);
   c1->SetTopMargin(0.05);
   c1->SetBottomMargin(0.13);
   c1->SetFrameFillStyle(0);
   c1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: c1_1
   TPad *c1_1 = new TPad("c1_1", "newpad1",0,0,1,0.2);
   c1_1->Draw();
   c1_1->cd();
   c1_1->Range(-0.1428571,-0.7000001,1.047619,1.8);
   c1_1->SetFillColor(0);
   c1_1->SetFillStyle(4000);
   c1_1->SetBorderMode(0);
   c1_1->SetBorderSize(2);
   c1_1->SetGridx();
   c1_1->SetGridy();
   c1_1->SetTickx(1);
   c1_1->SetTicky(1);
   c1_1->SetLeftMargin(0.12);
   c1_1->SetRightMargin(0.04);
   c1_1->SetTopMargin(0);
   c1_1->SetBottomMargin(0.36);
   c1_1->SetFrameFillStyle(4000);
   c1_1->SetFrameBorderMode(0);
   c1_1->SetFrameFillStyle(4000);
   c1_1->SetFrameBorderMode(0);
   
   TH1D *ratiohist5628290 = new TH1D("ratiohist5628290","",20,0,1);
   ratiohist5628290->SetBinContent(1,0.9165701);
   ratiohist5628290->SetBinContent(2,0.9890175);
   ratiohist5628290->SetBinContent(3,1.058479);
   ratiohist5628290->SetBinContent(4,1.082987);
   ratiohist5628290->SetBinContent(5,1.097306);
   ratiohist5628290->SetBinContent(6,1.073937);
   ratiohist5628290->SetBinContent(7,0.9174944);
   ratiohist5628290->SetBinContent(8,0.8853606);
   ratiohist5628290->SetBinContent(9,5.885343);
   ratiohist5628290->SetBinError(1,0.005380627);
   ratiohist5628290->SetBinError(2,0.003352539);
   ratiohist5628290->SetBinError(3,0.00356345);
   ratiohist5628290->SetBinError(4,0.006997741);
   ratiohist5628290->SetBinError(5,0.0153208);
   ratiohist5628290->SetBinError(6,0.03380077);
   ratiohist5628290->SetBinError(7,0.2080609);
   ratiohist5628290->SetBinError(8,0.2493257);
   ratiohist5628290->SetBinError(9,3.733077);
   ratiohist5628290->SetMinimum(0.2);
   ratiohist5628290->SetMaximum(1.8);
   ratiohist5628290->SetEntries(13.77151);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff9900");
   ratiohist5628290->SetFillColor(ci);
   ratiohist5628290->SetLineWidth(2);
   ratiohist5628290->SetMarkerStyle(20);
   ratiohist5628290->GetXaxis()->SetTitle("Jet 2 #tau_{2} ");
   ratiohist5628290->GetXaxis()->SetNdivisions(505);
   ratiohist5628290->GetXaxis()->SetLabelFont(42);
   ratiohist5628290->GetXaxis()->SetLabelSize(0.14);
   ratiohist5628290->GetXaxis()->SetTitleSize(0.17);
   ratiohist5628290->GetXaxis()->SetTitleOffset(0.98);
   ratiohist5628290->GetXaxis()->SetTitleFont(42);
   ratiohist5628290->GetYaxis()->SetTitle("Data/MC");
   ratiohist5628290->GetYaxis()->CenterTitle(true);
   ratiohist5628290->GetYaxis()->SetNdivisions(105);
   ratiohist5628290->GetYaxis()->SetLabelFont(42);
   ratiohist5628290->GetYaxis()->SetLabelSize(0.14);
   ratiohist5628290->GetYaxis()->SetTitleSize(0.16);
   ratiohist5628290->GetYaxis()->SetTitleOffset(0.2);
   ratiohist5628290->GetYaxis()->SetTitleFont(42);
   ratiohist5628290->GetZaxis()->SetLabelFont(42);
   ratiohist5628290->GetZaxis()->SetLabelSize(0.035);
   ratiohist5628290->GetZaxis()->SetTitleSize(0.035);
   ratiohist5628290->GetZaxis()->SetTitleFont(42);
   ratiohist5628290->Draw("");
   
   Double_t Graph0_fx1018[21] = {
   0,
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t Graph0_fy1018[21] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph0_fex1018[21] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t Graph0_fey1018[21] = {
   0.005663217,
   0.005663217,
   0.003268859,
   0.003109068,
   0.00603056,
   0.01315648,
   0.02948052,
   0.2247161,
   0.260898,
   0.4498194,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(21,Graph0_fx1018,Graph0_fy1018,Graph0_fex1018,Graph0_fey1018);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(3013);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1018 = new TH1F("Graph_Graph1018","Graph",100,-0.1575,1.1325);
   Graph_Graph1018->SetMinimum(0.4602167);
   Graph_Graph1018->SetMaximum(1.539783);
   Graph_Graph1018->SetDirectory(0);
   Graph_Graph1018->SetStats(0);
   Graph_Graph1018->SetLineStyle(0);
   Graph_Graph1018->SetMarkerStyle(20);
   Graph_Graph1018->GetXaxis()->SetLabelFont(42);
   Graph_Graph1018->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1018->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1018->GetXaxis()->SetTitleFont(42);
   Graph_Graph1018->GetYaxis()->SetLabelFont(42);
   Graph_Graph1018->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1018->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1018->GetYaxis()->SetTitleFont(42);
   Graph_Graph1018->GetZaxis()->SetLabelFont(42);
   Graph_Graph1018->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1018);
   
   gre->Draw("3");
   
   TH1D *H_ratiohist4117291 = new TH1D("H_ratiohist4117291","",20,0,1);
   H_ratiohist4117291->SetBinContent(1,0.885228);
   H_ratiohist4117291->SetBinContent(2,1.044815);
   H_ratiohist4117291->SetBinContent(3,1.018332);
   H_ratiohist4117291->SetBinContent(4,0.9746428);
   H_ratiohist4117291->SetBinContent(5,0.9232798);
   H_ratiohist4117291->SetBinContent(6,0.8878029);
   H_ratiohist4117291->SetBinContent(7,0.8666738);
   H_ratiohist4117291->SetBinContent(8,1.350684);
   H_ratiohist4117291->SetBinContent(9,16.65481);
   H_ratiohist4117291->SetBinError(1,0.006310789);
   H_ratiohist4117291->SetBinError(2,0.005159344);
   H_ratiohist4117291->SetBinError(3,0.007289241);
   H_ratiohist4117291->SetBinError(4,0.01291408);
   H_ratiohist4117291->SetBinError(5,0.02779552);
   H_ratiohist4117291->SetBinError(6,0.1025695);
   H_ratiohist4117291->SetBinError(7,0.1736707);
   H_ratiohist4117291->SetBinError(8,0.5831648);
   H_ratiohist4117291->SetBinError(9,13.95931);
   H_ratiohist4117291->SetMinimum(0);
   H_ratiohist4117291->SetMaximum(2423943);
   H_ratiohist4117291->SetEntries(3.101082);

   ci = 994;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   H_ratiohist4117291->SetFillColor(ci);
   H_ratiohist4117291->SetLineStyle(9);
   H_ratiohist4117291->SetLineWidth(2);
   H_ratiohist4117291->SetMarkerStyle(20);
   H_ratiohist4117291->GetXaxis()->SetTitle("Jet 2 #tau_{2} ");
   H_ratiohist4117291->GetXaxis()->SetLabelFont(42);
   H_ratiohist4117291->GetXaxis()->SetLabelSize(0);
   H_ratiohist4117291->GetXaxis()->SetTitleSize(0);
   H_ratiohist4117291->GetXaxis()->SetTitleFont(42);
   H_ratiohist4117291->GetYaxis()->SetTitle("Events");
   H_ratiohist4117291->GetYaxis()->SetLabelFont(42);
   H_ratiohist4117291->GetYaxis()->SetLabelSize(0.035);
   H_ratiohist4117291->GetYaxis()->SetTitleFont(42);
   H_ratiohist4117291->GetZaxis()->SetLabelFont(42);
   H_ratiohist4117291->GetZaxis()->SetLabelSize(0.035);
   H_ratiohist4117291->GetZaxis()->SetTitleSize(0.035);
   H_ratiohist4117291->GetZaxis()->SetTitleFont(42);
   H_ratiohist4117291->Draw("HISTsame");
   
   TH1D *MG_ratiohist5951292 = new TH1D("MG_ratiohist5951292","",20,0,1);
   MG_ratiohist5951292->SetBinContent(1,0.9334241);
   MG_ratiohist5951292->SetBinContent(2,1.035755);
   MG_ratiohist5951292->SetBinContent(3,0.9969929);
   MG_ratiohist5951292->SetBinContent(4,0.951116);
   MG_ratiohist5951292->SetBinContent(5,0.9670665);
   MG_ratiohist5951292->SetBinContent(6,0.9861396);
   MG_ratiohist5951292->SetBinContent(7,0.9945578);
   MG_ratiohist5951292->SetBinContent(8,1.14353);
   MG_ratiohist5951292->SetBinContent(9,0.5452618);
   MG_ratiohist5951292->SetBinError(1,0.05750168);
   MG_ratiohist5951292->SetBinError(2,0.01657738);
   MG_ratiohist5951292->SetBinError(3,0.002272688);
   MG_ratiohist5951292->SetBinError(4,0.003902919);
   MG_ratiohist5951292->SetBinError(5,0.008196);
   MG_ratiohist5951292->SetBinError(6,0.0202608);
   MG_ratiohist5951292->SetBinError(7,0.05779387);
   MG_ratiohist5951292->SetBinError(8,0.2392675);
   MG_ratiohist5951292->SetBinError(9,0.3708817);
   MG_ratiohist5951292->SetMinimum(0);
   MG_ratiohist5951292->SetMaximum(2423943);
   MG_ratiohist5951292->SetEntries(361.822);

   ci = 995;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   MG_ratiohist5951292->SetFillColor(ci);
   MG_ratiohist5951292->SetLineStyle(2);
   MG_ratiohist5951292->SetLineWidth(2);
   MG_ratiohist5951292->SetMarkerStyle(20);
   MG_ratiohist5951292->GetXaxis()->SetTitle("Jet 2 #tau_{2} ");
   MG_ratiohist5951292->GetXaxis()->SetLabelFont(42);
   MG_ratiohist5951292->GetXaxis()->SetLabelSize(0);
   MG_ratiohist5951292->GetXaxis()->SetTitleSize(0);
   MG_ratiohist5951292->GetXaxis()->SetTitleFont(42);
   MG_ratiohist5951292->GetYaxis()->SetTitle("Events");
   MG_ratiohist5951292->GetYaxis()->SetLabelFont(42);
   MG_ratiohist5951292->GetYaxis()->SetLabelSize(0.035);
   MG_ratiohist5951292->GetYaxis()->SetTitleFont(42);
   MG_ratiohist5951292->GetZaxis()->SetLabelFont(42);
   MG_ratiohist5951292->GetZaxis()->SetLabelSize(0.035);
   MG_ratiohist5951292->GetZaxis()->SetTitleSize(0.035);
   MG_ratiohist5951292->GetZaxis()->SetTitleFont(42);
   MG_ratiohist5951292->Draw("HISTsame");
   
   TH1D *ratiohist5628293 = new TH1D("ratiohist5628293","",20,0,1);
   ratiohist5628293->SetBinContent(1,0.9165701);
   ratiohist5628293->SetBinContent(2,0.9890175);
   ratiohist5628293->SetBinContent(3,1.058479);
   ratiohist5628293->SetBinContent(4,1.082987);
   ratiohist5628293->SetBinContent(5,1.097306);
   ratiohist5628293->SetBinContent(6,1.073937);
   ratiohist5628293->SetBinContent(7,0.9174944);
   ratiohist5628293->SetBinContent(8,0.8853606);
   ratiohist5628293->SetBinContent(9,5.885343);
   ratiohist5628293->SetBinError(1,0.005380627);
   ratiohist5628293->SetBinError(2,0.003352539);
   ratiohist5628293->SetBinError(3,0.00356345);
   ratiohist5628293->SetBinError(4,0.006997741);
   ratiohist5628293->SetBinError(5,0.0153208);
   ratiohist5628293->SetBinError(6,0.03380077);
   ratiohist5628293->SetBinError(7,0.2080609);
   ratiohist5628293->SetBinError(8,0.2493257);
   ratiohist5628293->SetBinError(9,3.733077);
   ratiohist5628293->SetMinimum(0.2);
   ratiohist5628293->SetMaximum(1.8);
   ratiohist5628293->SetEntries(13.77151);

   ci = TColor::GetColor("#ff9900");
   ratiohist5628293->SetFillColor(ci);
   ratiohist5628293->SetLineWidth(2);
   ratiohist5628293->SetMarkerStyle(20);
   ratiohist5628293->GetXaxis()->SetTitle("Jet 2 #tau_{2} ");
   ratiohist5628293->GetXaxis()->SetNdivisions(505);
   ratiohist5628293->GetXaxis()->SetLabelFont(42);
   ratiohist5628293->GetXaxis()->SetLabelSize(0.14);
   ratiohist5628293->GetXaxis()->SetTitleSize(0.17);
   ratiohist5628293->GetXaxis()->SetTitleOffset(0.98);
   ratiohist5628293->GetXaxis()->SetTitleFont(42);
   ratiohist5628293->GetYaxis()->SetTitle("Data/MC");
   ratiohist5628293->GetYaxis()->CenterTitle(true);
   ratiohist5628293->GetYaxis()->SetNdivisions(105);
   ratiohist5628293->GetYaxis()->SetLabelFont(42);
   ratiohist5628293->GetYaxis()->SetLabelSize(0.14);
   ratiohist5628293->GetYaxis()->SetTitleSize(0.16);
   ratiohist5628293->GetYaxis()->SetTitleOffset(0.2);
   ratiohist5628293->GetYaxis()->SetTitleFont(42);
   ratiohist5628293->GetZaxis()->SetLabelFont(42);
   ratiohist5628293->GetZaxis()->SetLabelSize(0.035);
   ratiohist5628293->GetZaxis()->SetTitleSize(0.035);
   ratiohist5628293->GetZaxis()->SetTitleFont(42);
   ratiohist5628293->Draw("same");
   c1_1->Modified();
   c1->cd();
  
// ------------>Primitives in pad: c1_2
   TPad *c1_2 = new TPad("c1_2", "newpad2",0,0.2,1,1);
   c1_2->Draw();
   c1_2->cd();
   c1_2->Range(-0.1428571,-36345.17,1.047619,2759437);
   c1_2->SetFillColor(0);
   c1_2->SetFillStyle(4000);
   c1_2->SetBorderMode(0);
   c1_2->SetBorderSize(2);
   c1_2->SetTickx(1);
   c1_2->SetTicky(1);
   c1_2->SetLeftMargin(0.12);
   c1_2->SetRightMargin(0.04);
   c1_2->SetTopMargin(0.12);
   c1_2->SetBottomMargin(0.013);
   c1_2->SetFrameFillStyle(0);
   c1_2->SetFrameBorderMode(0);
   c1_2->SetFrameFillStyle(0);
   c1_2->SetFrameBorderMode(0);
   
   TH1D *looseSel_Jet_2_tau_2hdata294 = new TH1D("looseSel_Jet_2_tau_2hdata294","",20,0,1);
   looseSel_Jet_2_tau_2hdata294->SetBinContent(1,418499);
   looseSel_Jet_2_tau_2hdata294->SetBinContent(2,1242110);
   looseSel_Jet_2_tau_2hdata294->SetBinContent(3,599690);
   looseSel_Jet_2_tau_2hdata294->SetBinContent(4,185751);
   looseSel_Jet_2_tau_2hdata294->SetBinContent(5,45766);
   looseSel_Jet_2_tau_2hdata294->SetBinContent(6,8231);
   looseSel_Jet_2_tau_2hdata294->SetBinContent(7,1078);
   looseSel_Jet_2_tau_2hdata294->SetBinContent(8,89);
   looseSel_Jet_2_tau_2hdata294->SetBinContent(9,5);
   looseSel_Jet_2_tau_2hdata294->SetBinError(1,646.915);
   looseSel_Jet_2_tau_2hdata294->SetBinError(2,1114.5);
   looseSel_Jet_2_tau_2hdata294->SetBinError(3,774.3965);
   looseSel_Jet_2_tau_2hdata294->SetBinError(4,430.9884);
   looseSel_Jet_2_tau_2hdata294->SetBinError(5,213.9299);
   looseSel_Jet_2_tau_2hdata294->SetBinError(6,90.72486);
   looseSel_Jet_2_tau_2hdata294->SetBinError(7,32.83291);
   looseSel_Jet_2_tau_2hdata294->SetBinError(8,9.433981);
   looseSel_Jet_2_tau_2hdata294->SetBinError(9,2.236068);
   looseSel_Jet_2_tau_2hdata294->SetMinimum(0);
   looseSel_Jet_2_tau_2hdata294->SetMaximum(2423943);
   looseSel_Jet_2_tau_2hdata294->SetEntries(2501219);

   ci = TColor::GetColor("#ff9900");
   looseSel_Jet_2_tau_2hdata294->SetFillColor(ci);
   looseSel_Jet_2_tau_2hdata294->SetLineWidth(2);
   looseSel_Jet_2_tau_2hdata294->SetMarkerStyle(20);
   looseSel_Jet_2_tau_2hdata294->GetXaxis()->SetTitle("Jet 2 #tau_{2} ");
   looseSel_Jet_2_tau_2hdata294->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_2hdata294->GetXaxis()->SetLabelSize(0);
   looseSel_Jet_2_tau_2hdata294->GetXaxis()->SetTitleSize(0);
   looseSel_Jet_2_tau_2hdata294->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_2hdata294->GetYaxis()->SetTitle("Events");
   looseSel_Jet_2_tau_2hdata294->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_2hdata294->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_2hdata294->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_2hdata294->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_2hdata294->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_2hdata294->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_2hdata294->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_2hdata294->Draw("EP");
   
   THStack *stack = new THStack();
   stack->SetName("stack");
   stack->SetTitle("ctack");
   
   TH1F *stack_stack_18 = new TH1F("stack_stack_18","ctack",20,0,1);
   stack_stack_18->SetMinimum(0);
   stack_stack_18->SetMaximum(1318698);
   stack_stack_18->SetDirectory(0);
   stack_stack_18->SetStats(0);
   stack_stack_18->SetLineStyle(0);
   stack_stack_18->SetMarkerStyle(20);
   stack_stack_18->GetXaxis()->SetLabelFont(42);
   stack_stack_18->GetXaxis()->SetLabelOffset(0.007);
   stack_stack_18->GetXaxis()->SetTitleOffset(1.1);
   stack_stack_18->GetXaxis()->SetTitleFont(42);
   stack_stack_18->GetYaxis()->SetLabelFont(42);
   stack_stack_18->GetYaxis()->SetLabelOffset(0.007);
   stack_stack_18->GetYaxis()->SetTitleOffset(1.25);
   stack_stack_18->GetYaxis()->SetTitleFont(42);
   stack_stack_18->GetZaxis()->SetLabelFont(42);
   stack_stack_18->GetZaxis()->SetLabelOffset(0.007);
   stack_stack_18->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(stack_stack_18);
   
   
   TH1D *resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc295 = new TH1D("resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc295","",20,0,1);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc295->SetBinContent(1,4756.397);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc295->SetBinContent(2,13345.4);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc295->SetBinContent(3,12586.27);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc295->SetBinContent(4,7131.003);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc295->SetBinContent(5,1930.802);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc295->SetBinContent(6,322.6521);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc295->SetBinContent(7,41.5616);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc295->SetBinContent(8,5.554851);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc295->SetBinContent(9,0.3002135);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc295->SetBinError(1,26.66709);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc295->SetBinError(2,44.93289);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc295->SetBinError(3,43.4538);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc295->SetBinError(4,32.46546);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc295->SetBinError(5,16.79186);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc295->SetBinError(6,6.803505);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc295->SetBinError(7,2.449469);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc295->SetBinError(8,0.9107178);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc295->SetBinError(9,0.2128139);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc295->SetEntries(377256);

   ci = TColor::GetColor("#cc3333");
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc295->SetFillColor(ci);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc295->SetLineWidth(2);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc295->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc295->GetXaxis()->SetTitle("Jet 2 #tau_{2} ");
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc295->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc295->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc295->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc295->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc295->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc295->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc295->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc295->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc295->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc295->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc295->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc295->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc295->GetZaxis()->SetTitleFont(42);
   stack->Add(resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc,"");
   
   TH1D *resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc296 = new TH1D("resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc296","",20,0,1);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc296->SetBinContent(1,7296.295);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc296->SetBinContent(2,10404.08);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc296->SetBinContent(3,4166.263);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc296->SetBinContent(4,1262.999);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc296->SetBinContent(5,287.8295);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc296->SetBinContent(6,44.49099);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc296->SetBinContent(7,7.263835);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc296->SetBinContent(8,0.9079794);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc296->SetBinError(1,28.96264);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc296->SetBinError(2,34.56928);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc296->SetBinError(3,21.8614);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc296->SetBinError(4,12.03502);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc296->SetBinError(5,5.747925);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc296->SetBinError(6,2.264218);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc296->SetBinError(7,0.91025);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc296->SetBinError(8,0.321822);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc296->SetEntries(208226);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc296->SetFillColor(47);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc296->SetLineWidth(2);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc296->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc296->GetXaxis()->SetTitle("Jet 2 #tau_{2} ");
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc296->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc296->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc296->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc296->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc296->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc296->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc296->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc296->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc296->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc296->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc296->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc296->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc296->GetZaxis()->SetTitleFont(42);
   stack->Add(resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc,"");
   
   TH1D *resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc297 = new TH1D("resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc297","",20,0,1);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc297->SetBinContent(1,14695.13);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc297->SetBinContent(2,20181.84);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc297->SetBinContent(3,8277.525);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc297->SetBinContent(4,2550.055);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc297->SetBinContent(5,581.2029);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc297->SetBinContent(6,80.86622);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc297->SetBinContent(7,11.44682);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc297->SetBinContent(8,1.107756);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc297->SetBinError(1,52.39194);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc297->SetBinError(2,61.35094);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc297->SetBinError(3,39.26566);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc297->SetBinError(4,21.79639);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc297->SetBinError(5,10.39791);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc297->SetBinError(6,3.8736);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc297->SetBinError(7,1.457383);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc297->SetBinError(8,0.4533706);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc297->SetEntries(252534);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc297->SetFillColor(21);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc297->SetLineWidth(2);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc297->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc297->GetXaxis()->SetTitle("Jet 2 #tau_{2} ");
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc297->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc297->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc297->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc297->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc297->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc297->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc297->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc297->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc297->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc297->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc297->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc297->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc297->GetZaxis()->SetTitleFont(42);
   stack->Add(resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc,"");
   
   TH1D *looseSel_Jet_2_tau_2hqcd298 = new TH1D("looseSel_Jet_2_tau_2hqcd298","",20,0,1);
   looseSel_Jet_2_tau_2hqcd298->SetBinContent(1,429844.6);
   looseSel_Jet_2_tau_2hqcd298->SetBinContent(2,1211972);
   looseSel_Jet_2_tau_2hqcd298->SetBinContent(3,541528.1);
   looseSel_Jet_2_tau_2hqcd298->SetBinContent(4,160573.2);
   looseSel_Jet_2_tau_2hqcd298->SetBinContent(5,38907.78);
   looseSel_Jet_2_tau_2hqcd298->SetBinContent(6,7216.312);
   looseSel_Jet_2_tau_2hqcd298->SetBinContent(7,1114.667);
   looseSel_Jet_2_tau_2hqcd298->SetBinContent(8,92.95342);
   looseSel_Jet_2_tau_2hqcd298->SetBinContent(9,0.5493547);
   looseSel_Jet_2_tau_2hqcd298->SetBinError(1,2584.951);
   looseSel_Jet_2_tau_2hqcd298->SetBinError(2,4104.52);
   looseSel_Jet_2_tau_2hqcd298->SetBinError(3,1760.358);
   looseSel_Jet_2_tau_2hqcd298->SetBinError(4,1033.536);
   looseSel_Jet_2_tau_2hqcd298->SetBinError(5,548.3396);
   looseSel_Jet_2_tau_2hqcd298->SetBinError(6,225.8012);
   looseSel_Jet_2_tau_2hqcd298->SetBinError(7,264.0107);
   looseSel_Jet_2_tau_2hqcd298->SetBinError(8,26.2048);
   looseSel_Jet_2_tau_2hqcd298->SetBinError(9,0.3174123);
   looseSel_Jet_2_tau_2hqcd298->SetEntries(9443600);
   looseSel_Jet_2_tau_2hqcd298->SetFillColor(36);
   looseSel_Jet_2_tau_2hqcd298->SetLineWidth(2);
   looseSel_Jet_2_tau_2hqcd298->SetMarkerStyle(20);
   looseSel_Jet_2_tau_2hqcd298->GetXaxis()->SetTitle("Jet 2 #tau_{2} ");
   looseSel_Jet_2_tau_2hqcd298->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_2hqcd298->GetXaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_2hqcd298->GetXaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_2hqcd298->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_2hqcd298->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_2_tau_2hqcd298->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_2hqcd298->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_2hqcd298->GetYaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_2hqcd298->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_2hqcd298->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_2hqcd298->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_2hqcd298->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_2hqcd298->GetZaxis()->SetTitleFont(42);
   stack->Add(looseSel_Jet_2_tau_2hqcd,"");
   stack->Draw("histsame");
   
   TH1D *resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig299 = new TH1D("resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig299","",20,0,1);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig299->SetBinContent(1,451560.7);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig299->SetBinContent(2,67150.14);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig299->SetBinContent(3,5622.275);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig299->SetBinContent(4,732.797);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig299->SetBinContent(5,140.8968);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig299->SetBinContent(6,49.19242);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig299->SetBinError(1,1302.96);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig299->SetBinError(2,503.1957);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig299->SetBinError(3,145.2369);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig299->SetBinError(4,52.87144);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig299->SetBinError(5,23.2586);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig299->SetBinError(6,13.36354);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig299->SetEntries(165768);

   ci = TColor::GetColor("#ff6600");
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig299->SetLineColor(ci);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig299->SetLineStyle(2);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig299->SetLineWidth(2);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig299->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig299->GetXaxis()->SetTitle("Jet 2 #tau_{2} ");
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig299->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig299->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig299->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig299->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig299->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig299->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig299->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig299->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig299->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig299->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig299->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig299->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig299->GetZaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig299->Draw("HISTCSAME");
   
   TH1D *resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig300 = new TH1D("resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig300","",20,0,1);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig300->SetBinContent(1,459977.5);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig300->SetBinContent(2,62887.79);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig300->SetBinContent(3,2360.293);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig300->SetBinContent(4,30.40938);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig300->SetBinError(1,3011.061);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig300->SetBinError(2,1123.237);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig300->SetBinError(3,222.314);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig300->SetBinError(4,21.57349);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig300->SetEntries(34132);

   ci = TColor::GetColor("#990099");
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig300->SetLineColor(ci);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig300->SetLineWidth(2);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig300->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig300->GetXaxis()->SetTitle("Jet 2 #tau_{2} ");
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig300->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig300->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig300->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig300->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig300->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig300->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig300->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig300->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig300->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig300->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig300->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig300->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig300->GetZaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig300->Draw("HISTCSAME");
   
   TH1D *resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig301 = new TH1D("resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig301","",20,0,1);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig301->SetBinContent(1,438113);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig301->SetBinContent(2,81008.77);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig301->SetBinContent(3,5479.792);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig301->SetBinContent(4,485.2574);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig301->SetBinContent(5,169.1819);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig301->SetBinError(1,2967.048);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig301->SetBinError(2,1276.586);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig301->SetBinError(3,329.0659);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig301->SetBinError(4,92.62792);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig301->SetBinError(5,60.88644);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig301->SetEntries(31816);

   ci = TColor::GetColor("#009900");
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig301->SetLineColor(ci);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig301->SetLineStyle(4);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig301->SetLineWidth(2);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig301->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig301->GetXaxis()->SetTitle("Jet 2 #tau_{2} ");
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig301->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig301->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig301->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig301->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig301->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig301->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig301->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig301->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig301->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig301->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig301->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig301->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig301->GetZaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig301->Draw("HISTCSAME");
   
   TH1D *looseSel_Jet_2_tau_2hherwig302 = new TH1D("looseSel_Jet_2_tau_2hherwig302","",20,0,1);
   looseSel_Jet_2_tau_2hherwig302->SetBinContent(1,472758.4);
   looseSel_Jet_2_tau_2hherwig302->SetBinContent(2,1188832);
   looseSel_Jet_2_tau_2hherwig302->SetBinContent(3,588894.3);
   looseSel_Jet_2_tau_2hherwig302->SetBinContent(4,190583.7);
   looseSel_Jet_2_tau_2hherwig302->SetBinContent(5,49568.94);
   looseSel_Jet_2_tau_2hherwig302->SetBinContent(6,9271.202);
   looseSel_Jet_2_tau_2hherwig302->SetBinContent(7,1243.836);
   looseSel_Jet_2_tau_2hherwig302->SetBinContent(8,65.89252);
   looseSel_Jet_2_tau_2hherwig302->SetBinContent(9,0.3002135);
   looseSel_Jet_2_tau_2hherwig302->SetBinError(1,3290.11);
   looseSel_Jet_2_tau_2hherwig302->SetBinError(2,5772.784);
   looseSel_Jet_2_tau_2hherwig302->SetBinError(3,4146.155);
   looseSel_Jet_2_tau_2hherwig302->SetBinError(4,2486.228);
   looseSel_Jet_2_tau_2hherwig302->SetBinError(5,1474.184);
   looseSel_Jet_2_tau_2hherwig302->SetBinError(6,1066.233);
   looseSel_Jet_2_tau_2hherwig302->SetBinError(7,246.3534);
   looseSel_Jet_2_tau_2hherwig302->SetBinError(8,27.57871);
   looseSel_Jet_2_tau_2hherwig302->SetBinError(9,0.2128139);
   looseSel_Jet_2_tau_2hherwig302->SetEntries(1256427);

   ci = 992;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   looseSel_Jet_2_tau_2hherwig302->SetFillColor(ci);
   looseSel_Jet_2_tau_2hherwig302->SetLineStyle(9);
   looseSel_Jet_2_tau_2hherwig302->SetLineWidth(2);
   looseSel_Jet_2_tau_2hherwig302->SetMarkerStyle(20);
   looseSel_Jet_2_tau_2hherwig302->GetXaxis()->SetTitle("Jet 2 #tau_{2} ");
   looseSel_Jet_2_tau_2hherwig302->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_2hherwig302->GetXaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_2hherwig302->GetXaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_2hherwig302->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_2hherwig302->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_2_tau_2hherwig302->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_2hherwig302->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_2hherwig302->GetYaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_2hherwig302->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_2hherwig302->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_2hherwig302->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_2hherwig302->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_2hherwig302->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_2hherwig302->Draw("HIST same");
   
   TH1D *looseSel_Jet_2_tau_2hmg303 = new TH1D("looseSel_Jet_2_tau_2hmg303","",20,0,1);
   looseSel_Jet_2_tau_2hmg303->SetBinContent(1,448348.2);
   looseSel_Jet_2_tau_2hmg303->SetBinContent(2,1199232);
   looseSel_Jet_2_tau_2hmg303->SetBinContent(3,601498.7);
   looseSel_Jet_2_tau_2hmg303->SetBinContent(4,195298);
   looseSel_Jet_2_tau_2hmg303->SetBinContent(5,47324.56);
   looseSel_Jet_2_tau_2hmg303->SetBinContent(6,8346.688);
   looseSel_Jet_2_tau_2hmg303->SetBinContent(7,1083.899);
   looseSel_Jet_2_tau_2hmg303->SetBinContent(8,77.82918);
   looseSel_Jet_2_tau_2hmg303->SetBinContent(9,9.169907);
   looseSel_Jet_2_tau_2hmg303->SetBinError(1,27610.88);
   looseSel_Jet_2_tau_2hmg303->SetBinError(2,19163.67);
   looseSel_Jet_2_tau_2hmg303->SetBinError(3,1129.919);
   looseSel_Jet_2_tau_2hmg303->SetBinError(4,660.9988);
   looseSel_Jet_2_tau_2hmg303->SetBinError(5,334.5592);
   looseSel_Jet_2_tau_2hmg303->SetBinError(6,144.7203);
   looseSel_Jet_2_tau_2hmg303->SetBinError(7,53.64086);
   looseSel_Jet_2_tau_2hmg303->SetBinError(8,14.04029);
   looseSel_Jet_2_tau_2hmg303->SetBinError(9,4.699598);
   looseSel_Jet_2_tau_2hmg303->SetEntries(3695211);

   ci = 993;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   looseSel_Jet_2_tau_2hmg303->SetFillColor(ci);
   looseSel_Jet_2_tau_2hmg303->SetLineStyle(2);
   looseSel_Jet_2_tau_2hmg303->SetLineWidth(2);
   looseSel_Jet_2_tau_2hmg303->SetMarkerStyle(20);
   looseSel_Jet_2_tau_2hmg303->GetXaxis()->SetTitle("Jet 2 #tau_{2} ");
   looseSel_Jet_2_tau_2hmg303->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_2hmg303->GetXaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_2hmg303->GetXaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_2hmg303->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_2hmg303->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_2_tau_2hmg303->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_2hmg303->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_2hmg303->GetYaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_2hmg303->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_2hmg303->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_2hmg303->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_2hmg303->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_2hmg303->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_2hmg303->Draw("HIST same");
   
   TH1D *looseSel_Jet_2_tau_2hqcd304 = new TH1D("looseSel_Jet_2_tau_2hqcd304","",20,0,1);
   looseSel_Jet_2_tau_2hqcd304->SetBinContent(1,456592.4);
   looseSel_Jet_2_tau_2hqcd304->SetBinContent(2,1255903);
   looseSel_Jet_2_tau_2hqcd304->SetBinContent(3,566558.1);
   looseSel_Jet_2_tau_2hqcd304->SetBinContent(4,171517.2);
   looseSel_Jet_2_tau_2hqcd304->SetBinContent(5,41707.62);
   looseSel_Jet_2_tau_2hqcd304->SetBinContent(6,7664.321);
   looseSel_Jet_2_tau_2hqcd304->SetBinContent(7,1174.939);
   looseSel_Jet_2_tau_2hqcd304->SetBinContent(8,100.524);
   looseSel_Jet_2_tau_2hqcd304->SetBinContent(9,0.8495682);
   looseSel_Jet_2_tau_2hqcd304->SetBinError(1,2585.782);
   looseSel_Jet_2_tau_2hqcd304->SetBinError(2,4105.37);
   looseSel_Jet_2_tau_2hqcd304->SetBinError(3,1761.468);
   looseSel_Jet_2_tau_2hqcd304->SetBinError(4,1034.345);
   looseSel_Jet_2_tau_2hqcd304->SetBinError(5,548.7252);
   looseSel_Jet_2_tau_2hqcd304->SetBinError(6,225.9482);
   looseSel_Jet_2_tau_2hqcd304->SetBinError(7,264.0277);
   looseSel_Jet_2_tau_2hqcd304->SetBinError(8,26.22651);
   looseSel_Jet_2_tau_2hqcd304->SetBinError(9,0.3821523);
   looseSel_Jet_2_tau_2hqcd304->SetEntries(1.028162e+07);
   looseSel_Jet_2_tau_2hqcd304->SetDirectory(0);
   looseSel_Jet_2_tau_2hqcd304->SetFillColor(1);
   looseSel_Jet_2_tau_2hqcd304->SetFillStyle(3013);
   looseSel_Jet_2_tau_2hqcd304->SetLineWidth(2);
   looseSel_Jet_2_tau_2hqcd304->SetMarkerStyle(20);
   looseSel_Jet_2_tau_2hqcd304->SetMarkerSize(0);
   looseSel_Jet_2_tau_2hqcd304->GetXaxis()->SetTitle("Jet 2 #tau_{2} ");
   looseSel_Jet_2_tau_2hqcd304->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_2hqcd304->GetXaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_2hqcd304->GetXaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_2hqcd304->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_2hqcd304->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_2_tau_2hqcd304->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_2hqcd304->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_2hqcd304->GetYaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_2hqcd304->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_2hqcd304->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_2hqcd304->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_2hqcd304->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_2hqcd304->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_2hqcd304->Draw("E2same");
   
   TH1D *looseSel_Jet_2_tau_2hdata305 = new TH1D("looseSel_Jet_2_tau_2hdata305","",20,0,1);
   looseSel_Jet_2_tau_2hdata305->SetBinContent(1,418499);
   looseSel_Jet_2_tau_2hdata305->SetBinContent(2,1242110);
   looseSel_Jet_2_tau_2hdata305->SetBinContent(3,599690);
   looseSel_Jet_2_tau_2hdata305->SetBinContent(4,185751);
   looseSel_Jet_2_tau_2hdata305->SetBinContent(5,45766);
   looseSel_Jet_2_tau_2hdata305->SetBinContent(6,8231);
   looseSel_Jet_2_tau_2hdata305->SetBinContent(7,1078);
   looseSel_Jet_2_tau_2hdata305->SetBinContent(8,89);
   looseSel_Jet_2_tau_2hdata305->SetBinContent(9,5);
   looseSel_Jet_2_tau_2hdata305->SetBinError(1,646.915);
   looseSel_Jet_2_tau_2hdata305->SetBinError(2,1114.5);
   looseSel_Jet_2_tau_2hdata305->SetBinError(3,774.3965);
   looseSel_Jet_2_tau_2hdata305->SetBinError(4,430.9884);
   looseSel_Jet_2_tau_2hdata305->SetBinError(5,213.9299);
   looseSel_Jet_2_tau_2hdata305->SetBinError(6,90.72486);
   looseSel_Jet_2_tau_2hdata305->SetBinError(7,32.83291);
   looseSel_Jet_2_tau_2hdata305->SetBinError(8,9.433981);
   looseSel_Jet_2_tau_2hdata305->SetBinError(9,2.236068);
   looseSel_Jet_2_tau_2hdata305->SetMinimum(0);
   looseSel_Jet_2_tau_2hdata305->SetMaximum(2423943);
   looseSel_Jet_2_tau_2hdata305->SetEntries(2501219);

   ci = TColor::GetColor("#ff9900");
   looseSel_Jet_2_tau_2hdata305->SetFillColor(ci);
   looseSel_Jet_2_tau_2hdata305->SetLineWidth(2);
   looseSel_Jet_2_tau_2hdata305->SetMarkerStyle(20);
   looseSel_Jet_2_tau_2hdata305->GetXaxis()->SetTitle("Jet 2 #tau_{2} ");
   looseSel_Jet_2_tau_2hdata305->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_2hdata305->GetXaxis()->SetLabelSize(0);
   looseSel_Jet_2_tau_2hdata305->GetXaxis()->SetTitleSize(0);
   looseSel_Jet_2_tau_2hdata305->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_2hdata305->GetYaxis()->SetTitle("Events");
   looseSel_Jet_2_tau_2hdata305->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_2hdata305->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_2hdata305->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_2hdata305->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_2hdata305->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_2hdata305->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_2hdata305->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_2hdata305->Draw("EPSAME");
   
   TLegend *leg = new TLegend(0.6084422,0.4798951,0.9174874,0.8295455,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("looseSel_Jet_2_tau_2hdata","Data","LEP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("looseSel_Jet_2_tau_2hqcd","QCD Pythia8","F");
   entry->SetFillColor(36);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("looseSel_Jet_2_tau_2hherwig","         Herwig++","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(9);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("looseSel_Jet_2_tau_2hmg","         MadGraph+Pythia8","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc","W+jets","F");
   entry->SetFillColor(21);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_2_hmc","Z+jets","F");
   entry->SetFillColor(47);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_2_hmc","t#bar{t}","F");

   ci = TColor::GetColor("#cc3333");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig","G#rightarrowWW","L");

   ci = TColor::GetColor("#ff6600");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig","W'#rightarrowWZ","L");

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_2_hsig","G#rightarrowZZ","L");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(4);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.96,0.904,"77.3 fb^{-1} (2016+2017)(13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.048);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.1578,0.849655,"CMS");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(61);
   tex->SetTextSize(0.072);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.1578,0.763255,"Preliminary");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(52);
   tex->SetTextSize(0.05472);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1D *looseSel_Jet_2_tau_2hdata_copy306 = new TH1D("looseSel_Jet_2_tau_2hdata_copy306","",20,0,1);
   looseSel_Jet_2_tau_2hdata_copy306->SetBinContent(1,418499);
   looseSel_Jet_2_tau_2hdata_copy306->SetBinContent(2,1242110);
   looseSel_Jet_2_tau_2hdata_copy306->SetBinContent(3,599690);
   looseSel_Jet_2_tau_2hdata_copy306->SetBinContent(4,185751);
   looseSel_Jet_2_tau_2hdata_copy306->SetBinContent(5,45766);
   looseSel_Jet_2_tau_2hdata_copy306->SetBinContent(6,8231);
   looseSel_Jet_2_tau_2hdata_copy306->SetBinContent(7,1078);
   looseSel_Jet_2_tau_2hdata_copy306->SetBinContent(8,89);
   looseSel_Jet_2_tau_2hdata_copy306->SetBinContent(9,5);
   looseSel_Jet_2_tau_2hdata_copy306->SetBinError(1,646.915);
   looseSel_Jet_2_tau_2hdata_copy306->SetBinError(2,1114.5);
   looseSel_Jet_2_tau_2hdata_copy306->SetBinError(3,774.3965);
   looseSel_Jet_2_tau_2hdata_copy306->SetBinError(4,430.9884);
   looseSel_Jet_2_tau_2hdata_copy306->SetBinError(5,213.9299);
   looseSel_Jet_2_tau_2hdata_copy306->SetBinError(6,90.72486);
   looseSel_Jet_2_tau_2hdata_copy306->SetBinError(7,32.83291);
   looseSel_Jet_2_tau_2hdata_copy306->SetBinError(8,9.433981);
   looseSel_Jet_2_tau_2hdata_copy306->SetBinError(9,2.236068);
   looseSel_Jet_2_tau_2hdata_copy306->SetMinimum(0);
   looseSel_Jet_2_tau_2hdata_copy306->SetMaximum(2423943);
   looseSel_Jet_2_tau_2hdata_copy306->SetEntries(2501219);
   looseSel_Jet_2_tau_2hdata_copy306->SetDirectory(0);

   ci = TColor::GetColor("#ff9900");
   looseSel_Jet_2_tau_2hdata_copy306->SetFillColor(ci);
   looseSel_Jet_2_tau_2hdata_copy306->SetLineWidth(2);
   looseSel_Jet_2_tau_2hdata_copy306->SetMarkerStyle(20);
   looseSel_Jet_2_tau_2hdata_copy306->GetXaxis()->SetTitle("Jet 2 #tau_{2} ");
   looseSel_Jet_2_tau_2hdata_copy306->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_2hdata_copy306->GetXaxis()->SetLabelSize(0);
   looseSel_Jet_2_tau_2hdata_copy306->GetXaxis()->SetTitleSize(0);
   looseSel_Jet_2_tau_2hdata_copy306->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_2hdata_copy306->GetYaxis()->SetTitle("Events");
   looseSel_Jet_2_tau_2hdata_copy306->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_2hdata_copy306->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_2hdata_copy306->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_2hdata_copy306->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_2hdata_copy306->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_2hdata_copy306->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_2hdata_copy306->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_2hdata_copy306->Draw("sameaxis");
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
