void looseSel_Jet_2_tau_1_2017()
{
//=========Macro generated from canvas: looseSel_Jet_2_tau_1/looseSel_Jet_2_tau_1
//=========  (Wed Sep  5 11:20:41 2018) by ROOT version6.02/05
   TCanvas *looseSel_Jet_2_tau_1 = new TCanvas("looseSel_Jet_2_tau_1", "looseSel_Jet_2_tau_1",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   looseSel_Jet_2_tau_1->SetHighLightColor(2);
   looseSel_Jet_2_tau_1->Range(0,0,1,1);
   looseSel_Jet_2_tau_1->SetFillColor(0);
   looseSel_Jet_2_tau_1->SetBorderMode(0);
   looseSel_Jet_2_tau_1->SetBorderSize(2);
   looseSel_Jet_2_tau_1->SetLeftMargin(0.16);
   looseSel_Jet_2_tau_1->SetRightMargin(0.02);
   looseSel_Jet_2_tau_1->SetTopMargin(0.05);
   looseSel_Jet_2_tau_1->SetBottomMargin(0.13);
   looseSel_Jet_2_tau_1->SetFrameFillStyle(0);
   looseSel_Jet_2_tau_1->SetFrameBorderMode(0);
  
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
   
   TH1D *ratiohist2744290 = new TH1D("ratiohist2744290","",20,0,1);
   ratiohist2744290->SetBinContent(1,0.8908865);
   ratiohist2744290->SetBinContent(2,0.9025537);
   ratiohist2744290->SetBinContent(3,0.9388897);
   ratiohist2744290->SetBinContent(4,1.013957);
   ratiohist2744290->SetBinContent(5,1.039136);
   ratiohist2744290->SetBinContent(6,1.028121);
   ratiohist2744290->SetBinContent(7,1.05262);
   ratiohist2744290->SetBinContent(8,1.077643);
   ratiohist2744290->SetBinContent(9,1.106553);
   ratiohist2744290->SetBinContent(10,1.184401);
   ratiohist2744290->SetBinContent(11,1.162717);
   ratiohist2744290->SetBinContent(12,1.997241);
   ratiohist2744290->SetBinContent(13,1.657509);
   ratiohist2744290->SetBinError(1,0.0312057);
   ratiohist2744290->SetBinError(2,0.004562894);
   ratiohist2744290->SetBinError(3,0.009963016);
   ratiohist2744290->SetBinError(4,0.003904523);
   ratiohist2744290->SetBinError(5,0.00527514);
   ratiohist2744290->SetBinError(6,0.01691438);
   ratiohist2744290->SetBinError(7,0.00944617);
   ratiohist2744290->SetBinError(8,0.01562384);
   ratiohist2744290->SetBinError(9,0.0249758);
   ratiohist2744290->SetBinError(10,0.04012333);
   ratiohist2744290->SetBinError(11,0.09509604);
   ratiohist2744290->SetBinError(12,0.7805797);
   ratiohist2744290->SetBinError(13,1.632957);
   ratiohist2744290->SetMinimum(0.2);
   ratiohist2744290->SetMaximum(1.8);
   ratiohist2744290->SetEntries(68.88945);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff9900");
   ratiohist2744290->SetFillColor(ci);
   ratiohist2744290->SetLineWidth(2);
   ratiohist2744290->SetMarkerStyle(20);
   ratiohist2744290->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   ratiohist2744290->GetXaxis()->SetNdivisions(505);
   ratiohist2744290->GetXaxis()->SetLabelFont(42);
   ratiohist2744290->GetXaxis()->SetLabelSize(0.14);
   ratiohist2744290->GetXaxis()->SetTitleSize(0.17);
   ratiohist2744290->GetXaxis()->SetTitleOffset(0.98);
   ratiohist2744290->GetXaxis()->SetTitleFont(42);
   ratiohist2744290->GetYaxis()->SetTitle("Data/MC");
   ratiohist2744290->GetYaxis()->CenterTitle(true);
   ratiohist2744290->GetYaxis()->SetNdivisions(105);
   ratiohist2744290->GetYaxis()->SetLabelFont(42);
   ratiohist2744290->GetYaxis()->SetLabelSize(0.14);
   ratiohist2744290->GetYaxis()->SetTitleSize(0.16);
   ratiohist2744290->GetYaxis()->SetTitleOffset(0.2);
   ratiohist2744290->GetYaxis()->SetTitleFont(42);
   ratiohist2744290->GetZaxis()->SetLabelFont(42);
   ratiohist2744290->GetZaxis()->SetLabelSize(0.035);
   ratiohist2744290->GetZaxis()->SetTitleSize(0.035);
   ratiohist2744290->GetZaxis()->SetTitleFont(42);
   ratiohist2744290->Draw("");
   
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
   0.01935005,
   0.01935005,
   0.003935358,
   0.01046278,
   0.003443433,
   0.004650963,
   0.01625949,
   0.00839563,
   0.01387758,
   0.02174613,
   0.03233423,
   0.07838356,
   0.3810885,
   0.7982862,
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
   Graph_Graph1018->SetMinimum(0.04205656);
   Graph_Graph1018->SetMaximum(1.957943);
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
   
   TH1D *H_ratiohist1632291 = new TH1D("H_ratiohist1632291","",20,0,1);
   H_ratiohist1632291->SetBinContent(1,1.055732);
   H_ratiohist1632291->SetBinContent(2,0.9523409);
   H_ratiohist1632291->SetBinContent(3,0.9896713);
   H_ratiohist1632291->SetBinContent(4,1.012246);
   H_ratiohist1632291->SetBinContent(5,1.025799);
   H_ratiohist1632291->SetBinContent(6,0.9973854);
   H_ratiohist1632291->SetBinContent(7,0.987573);
   H_ratiohist1632291->SetBinContent(8,0.9743864);
   H_ratiohist1632291->SetBinContent(9,1.035601);
   H_ratiohist1632291->SetBinContent(10,0.9875768);
   H_ratiohist1632291->SetBinContent(11,1.238578);
   H_ratiohist1632291->SetBinContent(12,2.423677);
   H_ratiohist1632291->SetBinContent(13,11.45575);
   H_ratiohist1632291->SetBinError(1,0.07981122);
   H_ratiohist1632291->SetBinError(2,0.01415541);
   H_ratiohist1632291->SetBinError(3,0.008910001);
   H_ratiohist1632291->SetBinError(4,0.009496268);
   H_ratiohist1632291->SetBinError(5,0.01186997);
   H_ratiohist1632291->SetBinError(6,0.01523552);
   H_ratiohist1632291->SetBinError(7,0.01965044);
   H_ratiohist1632291->SetBinError(8,0.02792442);
   H_ratiohist1632291->SetBinError(9,0.04372996);
   H_ratiohist1632291->SetBinError(10,0.1419261);
   H_ratiohist1632291->SetBinError(11,0.2499028);
   H_ratiohist1632291->SetBinError(12,1.4626);
   H_ratiohist1632291->SetBinError(13,10.47381);
   H_ratiohist1632291->SetMinimum(0);
   H_ratiohist1632291->SetMaximum(673116);
   H_ratiohist1632291->SetEntries(5.644772);

   ci = 994;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   H_ratiohist1632291->SetFillColor(ci);
   H_ratiohist1632291->SetLineStyle(9);
   H_ratiohist1632291->SetLineWidth(2);
   H_ratiohist1632291->SetMarkerStyle(20);
   H_ratiohist1632291->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   H_ratiohist1632291->GetXaxis()->SetLabelFont(42);
   H_ratiohist1632291->GetXaxis()->SetLabelSize(0);
   H_ratiohist1632291->GetXaxis()->SetTitleSize(0);
   H_ratiohist1632291->GetXaxis()->SetTitleFont(42);
   H_ratiohist1632291->GetYaxis()->SetTitle("Events / 0.05");
   H_ratiohist1632291->GetYaxis()->SetLabelFont(42);
   H_ratiohist1632291->GetYaxis()->SetLabelSize(0.035);
   H_ratiohist1632291->GetYaxis()->SetTitleFont(42);
   H_ratiohist1632291->GetZaxis()->SetLabelFont(42);
   H_ratiohist1632291->GetZaxis()->SetLabelSize(0.035);
   H_ratiohist1632291->GetZaxis()->SetTitleSize(0.035);
   H_ratiohist1632291->GetZaxis()->SetTitleFont(42);
   H_ratiohist1632291->Draw("HISTsame");
   
   TH1D *MG_ratiohist6474292 = new TH1D("MG_ratiohist6474292","",20,0,1);
   MG_ratiohist6474292->SetBinContent(1,1.163947);
   MG_ratiohist6474292->SetBinContent(2,1.089368);
   MG_ratiohist6474292->SetBinContent(3,0.9439352);
   MG_ratiohist6474292->SetBinContent(4,0.9906067);
   MG_ratiohist6474292->SetBinContent(5,1.060883);
   MG_ratiohist6474292->SetBinContent(6,0.8302809);
   MG_ratiohist6474292->SetBinContent(7,1.137044);
   MG_ratiohist6474292->SetBinContent(8,1.218587);
   MG_ratiohist6474292->SetBinContent(9,1.310947);
   MG_ratiohist6474292->SetBinContent(10,1.448817);
   MG_ratiohist6474292->SetBinContent(11,1.64408);
   MG_ratiohist6474292->SetBinContent(12,1.50162);
   MG_ratiohist6474292->SetBinContent(13,1.185199);
   MG_ratiohist6474292->SetBinError(1,0.04069464);
   MG_ratiohist6474292->SetBinError(2,0.005815365);
   MG_ratiohist6474292->SetBinError(3,0.05341554);
   MG_ratiohist6474292->SetBinError(4,0.05521741);
   MG_ratiohist6474292->SetBinError(5,0.004080099);
   MG_ratiohist6474292->SetBinError(6,0.08721904);
   MG_ratiohist6474292->SetBinError(7,0.007189799);
   MG_ratiohist6474292->SetBinError(8,0.01067889);
   MG_ratiohist6474292->SetBinError(9,0.01741954);
   MG_ratiohist6474292->SetBinError(10,0.03452883);
   MG_ratiohist6474292->SetBinError(11,0.1013169);
   MG_ratiohist6474292->SetBinError(12,0.3054124);
   MG_ratiohist6474292->SetBinError(13,1.266832);
   MG_ratiohist6474292->SetMinimum(0);
   MG_ratiohist6474292->SetMaximum(673116);
   MG_ratiohist6474292->SetEntries(139.7078);

   ci = 995;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   MG_ratiohist6474292->SetFillColor(ci);
   MG_ratiohist6474292->SetLineStyle(2);
   MG_ratiohist6474292->SetLineWidth(2);
   MG_ratiohist6474292->SetMarkerStyle(20);
   MG_ratiohist6474292->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   MG_ratiohist6474292->GetXaxis()->SetLabelFont(42);
   MG_ratiohist6474292->GetXaxis()->SetLabelSize(0);
   MG_ratiohist6474292->GetXaxis()->SetTitleSize(0);
   MG_ratiohist6474292->GetXaxis()->SetTitleFont(42);
   MG_ratiohist6474292->GetYaxis()->SetTitle("Events / 0.05");
   MG_ratiohist6474292->GetYaxis()->SetLabelFont(42);
   MG_ratiohist6474292->GetYaxis()->SetLabelSize(0.035);
   MG_ratiohist6474292->GetYaxis()->SetTitleFont(42);
   MG_ratiohist6474292->GetZaxis()->SetLabelFont(42);
   MG_ratiohist6474292->GetZaxis()->SetLabelSize(0.035);
   MG_ratiohist6474292->GetZaxis()->SetTitleSize(0.035);
   MG_ratiohist6474292->GetZaxis()->SetTitleFont(42);
   MG_ratiohist6474292->Draw("HISTsame");
   
   TH1D *ratiohist2744293 = new TH1D("ratiohist2744293","",20,0,1);
   ratiohist2744293->SetBinContent(1,0.8908865);
   ratiohist2744293->SetBinContent(2,0.9025537);
   ratiohist2744293->SetBinContent(3,0.9388897);
   ratiohist2744293->SetBinContent(4,1.013957);
   ratiohist2744293->SetBinContent(5,1.039136);
   ratiohist2744293->SetBinContent(6,1.028121);
   ratiohist2744293->SetBinContent(7,1.05262);
   ratiohist2744293->SetBinContent(8,1.077643);
   ratiohist2744293->SetBinContent(9,1.106553);
   ratiohist2744293->SetBinContent(10,1.184401);
   ratiohist2744293->SetBinContent(11,1.162717);
   ratiohist2744293->SetBinContent(12,1.997241);
   ratiohist2744293->SetBinContent(13,1.657509);
   ratiohist2744293->SetBinError(1,0.0312057);
   ratiohist2744293->SetBinError(2,0.004562894);
   ratiohist2744293->SetBinError(3,0.009963016);
   ratiohist2744293->SetBinError(4,0.003904523);
   ratiohist2744293->SetBinError(5,0.00527514);
   ratiohist2744293->SetBinError(6,0.01691438);
   ratiohist2744293->SetBinError(7,0.00944617);
   ratiohist2744293->SetBinError(8,0.01562384);
   ratiohist2744293->SetBinError(9,0.0249758);
   ratiohist2744293->SetBinError(10,0.04012333);
   ratiohist2744293->SetBinError(11,0.09509604);
   ratiohist2744293->SetBinError(12,0.7805797);
   ratiohist2744293->SetBinError(13,1.632957);
   ratiohist2744293->SetMinimum(0.2);
   ratiohist2744293->SetMaximum(1.8);
   ratiohist2744293->SetEntries(68.88945);

   ci = TColor::GetColor("#ff9900");
   ratiohist2744293->SetFillColor(ci);
   ratiohist2744293->SetLineWidth(2);
   ratiohist2744293->SetMarkerStyle(20);
   ratiohist2744293->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   ratiohist2744293->GetXaxis()->SetNdivisions(505);
   ratiohist2744293->GetXaxis()->SetLabelFont(42);
   ratiohist2744293->GetXaxis()->SetLabelSize(0.14);
   ratiohist2744293->GetXaxis()->SetTitleSize(0.17);
   ratiohist2744293->GetXaxis()->SetTitleOffset(0.98);
   ratiohist2744293->GetXaxis()->SetTitleFont(42);
   ratiohist2744293->GetYaxis()->SetTitle("Data/MC");
   ratiohist2744293->GetYaxis()->CenterTitle(true);
   ratiohist2744293->GetYaxis()->SetNdivisions(105);
   ratiohist2744293->GetYaxis()->SetLabelFont(42);
   ratiohist2744293->GetYaxis()->SetLabelSize(0.14);
   ratiohist2744293->GetYaxis()->SetTitleSize(0.16);
   ratiohist2744293->GetYaxis()->SetTitleOffset(0.2);
   ratiohist2744293->GetYaxis()->SetTitleFont(42);
   ratiohist2744293->GetZaxis()->SetLabelFont(42);
   ratiohist2744293->GetZaxis()->SetLabelSize(0.035);
   ratiohist2744293->GetZaxis()->SetTitleSize(0.035);
   ratiohist2744293->GetZaxis()->SetTitleFont(42);
   ratiohist2744293->Draw("same");
   c1_1->Modified();
   looseSel_Jet_2_tau_1->cd();
  
// ------------>Primitives in pad: c1_2
   TPad *c1_2 = new TPad("c1_2", "newpad2",0,0.2,1,1);
   c1_2->Draw();
   c1_2->cd();
   c1_2->Range(-0.1428571,-10092.86,1.047619,766280.8);
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
   
   TH1D *looseSel_Jet_2_tau_1hdata294 = new TH1D("looseSel_Jet_2_tau_1hdata294","",20,0,1);
   looseSel_Jet_2_tau_1hdata294->SetBinContent(1,1173);
   looseSel_Jet_2_tau_1hdata294->SetBinContent(2,99291);
   looseSel_Jet_2_tau_1hdata294->SetBinContent(3,319091);
   looseSel_Jet_2_tau_1hdata294->SetBinContent(4,336558);
   looseSel_Jet_2_tau_1hdata294->SetBinContent(5,241601);
   looseSel_Jet_2_tau_1hdata294->SetBinContent(6,159013);
   looseSel_Jet_2_tau_1hdata294->SetBinContent(7,99548);
   looseSel_Jet_2_tau_1hdata294->SetBinContent(8,56788);
   looseSel_Jet_2_tau_1hdata294->SetBinContent(9,27362);
   looseSel_Jet_2_tau_1hdata294->SetBinContent(10,9793);
   looseSel_Jet_2_tau_1hdata294->SetBinContent(11,1834);
   looseSel_Jet_2_tau_1hdata294->SetBinContent(12,133);
   looseSel_Jet_2_tau_1hdata294->SetBinContent(13,3);
   looseSel_Jet_2_tau_1hdata294->SetBinError(1,34.24909);
   looseSel_Jet_2_tau_1hdata294->SetBinError(2,315.1047);
   looseSel_Jet_2_tau_1hdata294->SetBinError(3,564.8814);
   looseSel_Jet_2_tau_1hdata294->SetBinError(4,580.1362);
   looseSel_Jet_2_tau_1hdata294->SetBinError(5,491.5292);
   looseSel_Jet_2_tau_1hdata294->SetBinError(6,398.7643);
   looseSel_Jet_2_tau_1hdata294->SetBinError(7,315.5123);
   looseSel_Jet_2_tau_1hdata294->SetBinError(8,238.3023);
   looseSel_Jet_2_tau_1hdata294->SetBinError(9,165.4146);
   looseSel_Jet_2_tau_1hdata294->SetBinError(10,98.95959);
   looseSel_Jet_2_tau_1hdata294->SetBinError(11,42.82523);
   looseSel_Jet_2_tau_1hdata294->SetBinError(12,11.53256);
   looseSel_Jet_2_tau_1hdata294->SetBinError(13,1.732051);
   looseSel_Jet_2_tau_1hdata294->SetMinimum(0);
   looseSel_Jet_2_tau_1hdata294->SetMaximum(673116);
   looseSel_Jet_2_tau_1hdata294->SetEntries(1352188);
   looseSel_Jet_2_tau_1hdata294->SetDirectory(0);

   ci = TColor::GetColor("#ff9900");
   looseSel_Jet_2_tau_1hdata294->SetFillColor(ci);
   looseSel_Jet_2_tau_1hdata294->SetLineWidth(2);
   looseSel_Jet_2_tau_1hdata294->SetMarkerStyle(20);
   looseSel_Jet_2_tau_1hdata294->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   looseSel_Jet_2_tau_1hdata294->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hdata294->GetXaxis()->SetLabelSize(0);
   looseSel_Jet_2_tau_1hdata294->GetXaxis()->SetTitleSize(0);
   looseSel_Jet_2_tau_1hdata294->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hdata294->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_2_tau_1hdata294->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hdata294->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hdata294->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hdata294->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hdata294->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hdata294->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hdata294->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hdata294->Draw("EP");
   
   THStack *test1 = new THStack();
   test1->SetName("test1");
   test1->SetTitle("test1");
   
   TH1F *test1_stack_18 = new TH1F("test1_stack_18","test1",20,0,1);
   test1_stack_18->SetMinimum(-1.387779e-17);
   test1_stack_18->SetMaximum(356853);
   test1_stack_18->SetDirectory(0);
   test1_stack_18->SetStats(0);
   test1_stack_18->SetLineStyle(0);
   test1_stack_18->SetMarkerStyle(20);
   test1_stack_18->GetXaxis()->SetLabelFont(42);
   test1_stack_18->GetXaxis()->SetLabelOffset(0.007);
   test1_stack_18->GetXaxis()->SetTitleOffset(1.1);
   test1_stack_18->GetXaxis()->SetTitleFont(42);
   test1_stack_18->GetYaxis()->SetLabelFont(42);
   test1_stack_18->GetYaxis()->SetLabelOffset(0.007);
   test1_stack_18->GetYaxis()->SetTitleOffset(1.25);
   test1_stack_18->GetYaxis()->SetTitleFont(42);
   test1_stack_18->GetZaxis()->SetLabelFont(42);
   test1_stack_18->GetZaxis()->SetLabelOffset(0.007);
   test1_stack_18->GetZaxis()->SetTitleFont(42);
   test1->SetHistogram(test1_stack_18);
   
   
   TH1D *resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295 = new TH1D("resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295","",20,0,1);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinContent(1,18.3509);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinContent(2,1356.995);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinContent(3,3614.399);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinContent(4,3225.506);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinContent(5,1948.477);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinContent(6,1136.784);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinContent(7,679.8341);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinContent(8,364.709);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinContent(9,157.9879);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinContent(10,52.86519);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinContent(11,8.993158);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinContent(12,0.4861167);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinContent(13,0.1215292);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinError(1,1.532424);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinError(2,12.91644);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinError(3,21.03227);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinError(4,19.86658);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinError(5,15.43516);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinError(6,11.77893);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinError(7,9.102526);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinError(8,6.681894);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinError(9,4.398617);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinError(10,2.540512);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinError(11,1.045433);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinError(12,0.2430583);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinError(13,0.1215292);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetEntries(104113);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetDirectory(0);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetFillColor(47);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetLineWidth(2);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetMarkerStyle(20);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->GetXaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->GetXaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->GetXaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->GetXaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->GetYaxis()->SetTitle("Events / 0.05");
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->GetYaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->GetYaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->GetYaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->GetYaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->GetZaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->GetZaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->GetZaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->GetZaxis()->SetTitleFont(42);
   test1->Add(resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc,"");
   
   TH1D *resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296 = new TH1D("resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296","",20,0,1);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinContent(1,56.93509);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinContent(2,2975.649);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinContent(3,7119.654);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinContent(4,6011.594);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinContent(5,3736.761);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinContent(6,2299.94);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinContent(7,1412.504);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinContent(8,767.6352);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinContent(9,322.0391);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinContent(10,109.521);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinContent(11,17.79222);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinContent(12,0.5930738);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinError(1,3.366561);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinError(2,24.36179);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinError(3,37.62891);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinError(4,34.55641);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinError(5,27.22691);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinError(6,21.36164);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinError(7,16.75251);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinError(8,12.33156);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinError(9,7.998561);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinError(10,4.67823);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinError(11,1.875464);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinError(12,0.3424113);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetEntries(126267);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetDirectory(0);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetFillColor(21);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetLineWidth(2);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetMarkerStyle(20);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->GetXaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->GetXaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->GetXaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->GetXaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->GetYaxis()->SetTitle("Events / 0.05");
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->GetYaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->GetYaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->GetYaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->GetYaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->GetZaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->GetZaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->GetZaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->GetZaxis()->SetTitleFont(42);
   test1->Add(resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc,"");
   
   TH1D *resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297 = new TH1D("resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297","",20,0,1);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinContent(1,3.345336);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinContent(2,468.2956);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinContent(3,2138.792);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinContent(4,3665.904);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinContent(5,4444.226);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinContent(6,4409.891);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinContent(7,3404.8);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinContent(8,1931.726);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinContent(9,732.638);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinContent(10,224.8157);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinContent(11,47.64504);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinContent(12,7.310543);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinContent(13,0.140348);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinError(1,0.6786777);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinError(2,8.573756);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinError(3,18.58759);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinError(4,24.43568);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinError(5,26.76018);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinError(6,26.49058);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinError(7,23.14332);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinError(8,17.33086);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinError(9,10.62191);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinError(10,5.920875);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinError(11,2.703092);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinError(12,1.062771);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinError(13,0.140348);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetEntries(188628);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetDirectory(0);

   ci = TColor::GetColor("#cc3333");
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetFillColor(ci);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetLineWidth(2);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetMarkerStyle(20);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->GetXaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->GetXaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->GetXaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->GetXaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->GetYaxis()->SetTitle("Events / 0.05");
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->GetYaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->GetYaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->GetYaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->GetYaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->GetZaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->GetZaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->GetZaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->GetZaxis()->SetTitleFont(42);
   test1->Add(resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc,"");
   
   TH1D *looseSel_Jet_2_tau_1hqcd298 = new TH1D("looseSel_Jet_2_tau_1hqcd298","",20,0,1);
   looseSel_Jet_2_tau_1hqcd298->SetBinContent(1,1238.035);
   looseSel_Jet_2_tau_1hqcd298->SetBinContent(2,105210.2);
   looseSel_Jet_2_tau_1hqcd298->SetBinContent(3,326987.1);
   looseSel_Jet_2_tau_1hqcd298->SetBinContent(4,319022.3);
   looseSel_Jet_2_tau_1hqcd298->SetBinContent(5,222372.3);
   looseSel_Jet_2_tau_1hqcd298->SetBinContent(6,146817.1);
   looseSel_Jet_2_tau_1hqcd298->SetBinContent(7,89074.53);
   looseSel_Jet_2_tau_1hqcd298->SetBinContent(8,49632.41);
   looseSel_Jet_2_tau_1hqcd298->SetBinContent(9,23514.56);
   looseSel_Jet_2_tau_1hqcd298->SetBinContent(10,7881.115);
   looseSel_Jet_2_tau_1hqcd298->SetBinContent(11,1502.909);
   looseSel_Jet_2_tau_1hqcd298->SetBinContent(12,58.20212);
   looseSel_Jet_2_tau_1hqcd298->SetBinContent(13,1.548068);
   looseSel_Jet_2_tau_1hqcd298->SetBinError(1,25.19847);
   looseSel_Jet_2_tau_1hqcd298->SetBinError(2,431.9694);
   looseSel_Jet_2_tau_1hqcd298->SetBinError(3,3555.57);
   looseSel_Jet_2_tau_1hqcd298->SetBinError(4,1142.006);
   looseSel_Jet_2_tau_1hqcd298->SetBinError(5,1080.573);
   looseSel_Jet_2_tau_1hqcd298->SetBinError(6,2514.495);
   looseSel_Jet_2_tau_1hqcd298->SetBinError(7,793.4223);
   looseSel_Jet_2_tau_1hqcd298->SetBinError(8,730.9597);
   looseSel_Jet_2_tau_1hqcd298->SetBinError(9,537.5391);
   looseSel_Jet_2_tau_1hqcd298->SetBinError(10,267.231);
   looseSel_Jet_2_tau_1hqcd298->SetBinError(11,123.5893);
   looseSel_Jet_2_tau_1hqcd298->SetBinError(12,25.35165);
   looseSel_Jet_2_tau_1hqcd298->SetBinError(13,1.432877);
   looseSel_Jet_2_tau_1hqcd298->SetEntries(5601853);
   looseSel_Jet_2_tau_1hqcd298->SetDirectory(0);
   looseSel_Jet_2_tau_1hqcd298->SetFillColor(36);
   looseSel_Jet_2_tau_1hqcd298->SetLineWidth(2);
   looseSel_Jet_2_tau_1hqcd298->SetMarkerStyle(20);
   looseSel_Jet_2_tau_1hqcd298->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   looseSel_Jet_2_tau_1hqcd298->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hqcd298->GetXaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hqcd298->GetXaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hqcd298->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hqcd298->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_2_tau_1hqcd298->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hqcd298->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hqcd298->GetYaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hqcd298->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hqcd298->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hqcd298->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hqcd298->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hqcd298->GetZaxis()->SetTitleFont(42);
   test1->Add(looseSel_Jet_2_tau_1hqcd,"");
   test1->Draw("histsame");
   
   TH1D *resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299 = new TH1D("resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299","",20,0,1);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->SetBinContent(1,3508.39);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->SetBinContent(2,217688.9);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->SetBinContent(3,175227.8);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->SetBinContent(4,8033.18);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->SetBinContent(5,1084.676);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->SetBinContent(6,113.434);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->SetBinError(1,325.1708);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->SetBinError(2,2565.1);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->SetBinError(3,2308.898);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->SetBinError(4,494.3778);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->SetBinError(5,186.2368);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->SetBinError(6,57.11786);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->SetEntries(17066);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->SetLineColor(ci);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->SetLineWidth(2);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->SetMarkerStyle(20);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->GetXaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->GetXaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->GetXaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->GetXaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->GetYaxis()->SetTitle("Events / 0.05");
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->GetYaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->GetYaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->GetYaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->GetYaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->GetZaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->GetZaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->GetZaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->GetZaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->Draw("HISTCSAME");
   
   TH1D *resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300 = new TH1D("resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300","",20,0,1);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetBinContent(1,6945.149);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetBinContent(2,246674.1);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetBinContent(3,133408.4);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetBinContent(4,12217.6);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetBinContent(5,3217.761);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetBinContent(6,1444.006);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetBinContent(7,808.4999);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetBinContent(8,498.9973);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetBinContent(9,304.5853);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetBinContent(10,90.22873);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetBinContent(11,47.10169);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetBinError(1,199.9914);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetBinError(2,1193.453);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetBinError(3,877.2961);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetBinError(4,264.8654);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetBinError(5,136.4192);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetBinError(6,91.39232);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetBinError(7,68.58637);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetBinError(8,53.93563);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetBinError(9,41.43951);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetBinError(10,21.85418);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetBinError(11,16.02855);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetEntries(82884);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetDirectory(0);

   ci = TColor::GetColor("#ff6600");
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetLineColor(ci);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetLineStyle(2);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetLineWidth(2);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetMarkerStyle(20);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->GetXaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->GetXaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->GetXaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->GetXaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->GetYaxis()->SetTitle("Events / 0.05");
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->GetYaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->GetYaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->GetYaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->GetYaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->GetZaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->GetZaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->GetZaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->GetZaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->Draw("HISTCSAME");
   
   TH1D *resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301 = new TH1D("resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301","",20,0,1);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetBinContent(1,2622.07);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetBinContent(2,184488.4);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetBinContent(3,197340.1);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetBinContent(4,17551.33);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetBinContent(5,2489.445);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetBinContent(6,634.3249);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetBinContent(7,224.5026);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetBinContent(8,149.9569);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetBinContent(9,102.9778);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetBinContent(10,53.3279);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetBinError(1,289.1934);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetBinError(2,2386.932);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetBinError(3,2463.396);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetBinError(4,738.5644);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetBinError(5,276.4575);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetBinError(6,144.5395);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetBinError(7,76.61273);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetBinError(8,62.34533);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetBinError(9,59.51096);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetBinError(10,37.75962);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetEntries(15908);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetDirectory(0);

   ci = TColor::GetColor("#009900");
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetLineColor(ci);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetLineStyle(4);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetLineWidth(2);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetMarkerStyle(20);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->GetXaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->GetXaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->GetXaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->GetXaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->GetYaxis()->SetTitle("Events / 0.05");
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->GetYaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->GetYaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->GetYaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->GetYaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->GetZaxis()->SetLabelFont(42);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->GetZaxis()->SetLabelSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->GetZaxis()->SetTitleSize(0.035);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->GetZaxis()->SetTitleFont(42);
   resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->Draw("HISTCSAME");
   
   TH1D *looseSel_Jet_2_tau_1hqcd302 = new TH1D("looseSel_Jet_2_tau_1hqcd302","",20,0,1);
   looseSel_Jet_2_tau_1hqcd302->SetBinContent(1,1316.666);
   looseSel_Jet_2_tau_1hqcd302->SetBinContent(2,110011.2);
   looseSel_Jet_2_tau_1hqcd302->SetBinContent(3,339860);
   looseSel_Jet_2_tau_1hqcd302->SetBinContent(4,331925.3);
   looseSel_Jet_2_tau_1hqcd302->SetBinContent(5,232501.8);
   looseSel_Jet_2_tau_1hqcd302->SetBinContent(6,154663.7);
   looseSel_Jet_2_tau_1hqcd302->SetBinContent(7,94571.66);
   looseSel_Jet_2_tau_1hqcd302->SetBinContent(8,52696.48);
   looseSel_Jet_2_tau_1hqcd302->SetBinContent(9,24727.23);
   looseSel_Jet_2_tau_1hqcd302->SetBinContent(10,8268.317);
   looseSel_Jet_2_tau_1hqcd302->SetBinContent(11,1577.34);
   looseSel_Jet_2_tau_1hqcd302->SetBinContent(12,66.59185);
   looseSel_Jet_2_tau_1hqcd302->SetBinContent(13,1.809945);
   looseSel_Jet_2_tau_1hqcd302->SetBinError(1,25.47755);
   looseSel_Jet_2_tau_1hqcd302->SetBinError(2,432.9335);
   looseSel_Jet_2_tau_1hqcd302->SetBinError(3,3555.88);
   looseSel_Jet_2_tau_1hqcd302->SetBinError(4,1142.962);
   looseSel_Jet_2_tau_1hqcd302->SetBinError(5,1081.357);
   looseSel_Jet_2_tau_1hqcd302->SetBinError(6,2514.753);
   looseSel_Jet_2_tau_1hqcd302->SetBinError(7,793.9887);
   looseSel_Jet_2_tau_1hqcd302->SetBinError(8,731.2997);
   looseSel_Jet_2_tau_1hqcd302->SetBinError(9,537.7215);
   looseSel_Jet_2_tau_1hqcd302->SetBinError(10,267.3496);
   looseSel_Jet_2_tau_1hqcd302->SetBinError(11,123.6375);
   looseSel_Jet_2_tau_1hqcd302->SetBinError(12,25.37739);
   looseSel_Jet_2_tau_1hqcd302->SetBinError(13,1.444854);
   looseSel_Jet_2_tau_1hqcd302->SetEntries(6020861);
   looseSel_Jet_2_tau_1hqcd302->SetDirectory(0);
   looseSel_Jet_2_tau_1hqcd302->SetFillColor(1);
   looseSel_Jet_2_tau_1hqcd302->SetFillStyle(3013);
   looseSel_Jet_2_tau_1hqcd302->SetLineWidth(2);
   looseSel_Jet_2_tau_1hqcd302->SetMarkerStyle(20);
   looseSel_Jet_2_tau_1hqcd302->SetMarkerSize(0);
   looseSel_Jet_2_tau_1hqcd302->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   looseSel_Jet_2_tau_1hqcd302->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hqcd302->GetXaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hqcd302->GetXaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hqcd302->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hqcd302->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_2_tau_1hqcd302->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hqcd302->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hqcd302->GetYaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hqcd302->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hqcd302->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hqcd302->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hqcd302->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hqcd302->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hqcd302->Draw("E2same");
   
   TH1D *looseSel_Jet_2_tau_1hherwig303 = new TH1D("looseSel_Jet_2_tau_1hherwig303","",20,0,1);
   looseSel_Jet_2_tau_1hherwig303->SetBinContent(1,1111.077);
   looseSel_Jet_2_tau_1hherwig303->SetBinContent(2,104259.9);
   looseSel_Jet_2_tau_1hherwig303->SetBinContent(3,322421.2);
   looseSel_Jet_2_tau_1hherwig303->SetBinContent(4,332486.3);
   looseSel_Jet_2_tau_1hherwig303->SetBinContent(5,235524.8);
   looseSel_Jet_2_tau_1hherwig303->SetBinContent(6,159429.8);
   looseSel_Jet_2_tau_1hherwig303->SetBinContent(7,100800.7);
   looseSel_Jet_2_tau_1hherwig303->SetBinContent(8,58280.78);
   looseSel_Jet_2_tau_1hherwig303->SetBinContent(9,26421.37);
   looseSel_Jet_2_tau_1hherwig303->SetBinContent(10,9916.191);
   looseSel_Jet_2_tau_1hherwig303->SetBinContent(11,1480.73);
   looseSel_Jet_2_tau_1hherwig303->SetBinContent(12,54.8753);
   looseSel_Jet_2_tau_1hherwig303->SetBinContent(13,0.2618772);
   looseSel_Jet_2_tau_1hherwig303->SetBinError(1,77.47757);
   looseSel_Jet_2_tau_1hherwig303->SetBinError(2,1513.965);
   looseSel_Jet_2_tau_1hherwig303->SetBinError(3,2846.085);
   looseSel_Jet_2_tau_1hherwig303->SetBinError(4,3066.077);
   looseSel_Jet_2_tau_1hherwig303->SetBinError(5,2682.909);
   looseSel_Jet_2_tau_1hherwig303->SetBinError(6,2402.322);
   looseSel_Jet_2_tau_1hherwig303->SetBinError(7,1980.094);
   looseSel_Jet_2_tau_1hherwig303->SetBinError(8,1652.235);
   looseSel_Jet_2_tau_1hherwig303->SetBinError(9,1104.193);
   looseSel_Jet_2_tau_1hherwig303->SetBinError(10,1421.543);
   looseSel_Jet_2_tau_1hherwig303->SetBinError(11,296.7532);
   looseSel_Jet_2_tau_1hherwig303->SetBinError(12,32.77158);
   looseSel_Jet_2_tau_1hherwig303->SetBinError(13,0.1856527);
   looseSel_Jet_2_tau_1hherwig303->SetEntries(546959);
   looseSel_Jet_2_tau_1hherwig303->SetDirectory(0);

   ci = 992;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   looseSel_Jet_2_tau_1hherwig303->SetFillColor(ci);
   looseSel_Jet_2_tau_1hherwig303->SetLineStyle(9);
   looseSel_Jet_2_tau_1hherwig303->SetLineWidth(2);
   looseSel_Jet_2_tau_1hherwig303->SetMarkerStyle(20);
   looseSel_Jet_2_tau_1hherwig303->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   looseSel_Jet_2_tau_1hherwig303->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hherwig303->GetXaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hherwig303->GetXaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hherwig303->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hherwig303->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_2_tau_1hherwig303->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hherwig303->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hherwig303->GetYaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hherwig303->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hherwig303->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hherwig303->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hherwig303->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hherwig303->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hherwig303->Draw("HIST same");
   
   TH1D *looseSel_Jet_2_tau_1hmg304 = new TH1D("looseSel_Jet_2_tau_1hmg304","",20,0,1);
   looseSel_Jet_2_tau_1hmg304->SetBinContent(1,1007.778);
   looseSel_Jet_2_tau_1hmg304->SetBinContent(2,91145.49);
   looseSel_Jet_2_tau_1hmg304->SetBinContent(3,338043.3);
   looseSel_Jet_2_tau_1hmg304->SetBinContent(4,339749.4);
   looseSel_Jet_2_tau_1hmg304->SetBinContent(5,227735.8);
   looseSel_Jet_2_tau_1hmg304->SetBinContent(6,191517.1);
   looseSel_Jet_2_tau_1hmg304->SetBinContent(7,87549.82);
   looseSel_Jet_2_tau_1hmg304->SetBinContent(8,46601.5);
   looseSel_Jet_2_tau_1hmg304->SetBinContent(9,20871.93);
   looseSel_Jet_2_tau_1hmg304->SetBinContent(10,6759.309);
   looseSel_Jet_2_tau_1hmg304->SetBinContent(11,1115.517);
   looseSel_Jet_2_tau_1hmg304->SetBinContent(12,88.571);
   looseSel_Jet_2_tau_1hmg304->SetBinContent(13,2.531222);
   looseSel_Jet_2_tau_1hmg304->SetBinError(1,19.38158);
   looseSel_Jet_2_tau_1hmg304->SetBinError(2,391.2462);
   looseSel_Jet_2_tau_1hmg304->SetBinError(3,19119.88);
   looseSel_Jet_2_tau_1hmg304->SetBinError(4,18928.91);
   looseSel_Jet_2_tau_1hmg304->SetBinError(5,743.2792);
   looseSel_Jet_2_tau_1hmg304->SetBinError(6,20112.69);
   looseSel_Jet_2_tau_1hmg304->SetBinError(7,479.0337);
   looseSel_Jet_2_tau_1hmg304->SetBinError(8,358.519);
   looseSel_Jet_2_tau_1hmg304->SetBinError(9,246.9751);
   looseSel_Jet_2_tau_1hmg304->SetBinError(10,145.8933);
   looseSel_Jet_2_tau_1hmg304->SetBinError(11,63.61791);
   looseSel_Jet_2_tau_1hmg304->SetBinError(12,16.29517);
   looseSel_Jet_2_tau_1hmg304->SetBinError(13,2.276926);
   looseSel_Jet_2_tau_1hmg304->SetEntries(1729089);
   looseSel_Jet_2_tau_1hmg304->SetDirectory(0);

   ci = 993;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   looseSel_Jet_2_tau_1hmg304->SetFillColor(ci);
   looseSel_Jet_2_tau_1hmg304->SetLineStyle(2);
   looseSel_Jet_2_tau_1hmg304->SetLineWidth(2);
   looseSel_Jet_2_tau_1hmg304->SetMarkerStyle(20);
   looseSel_Jet_2_tau_1hmg304->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   looseSel_Jet_2_tau_1hmg304->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hmg304->GetXaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hmg304->GetXaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hmg304->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hmg304->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_2_tau_1hmg304->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hmg304->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hmg304->GetYaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hmg304->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hmg304->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hmg304->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hmg304->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hmg304->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hmg304->Draw("HIST same");
   
   TH1D *looseSel_Jet_2_tau_1hdata305 = new TH1D("looseSel_Jet_2_tau_1hdata305","",20,0,1);
   looseSel_Jet_2_tau_1hdata305->SetBinContent(1,1173);
   looseSel_Jet_2_tau_1hdata305->SetBinContent(2,99291);
   looseSel_Jet_2_tau_1hdata305->SetBinContent(3,319091);
   looseSel_Jet_2_tau_1hdata305->SetBinContent(4,336558);
   looseSel_Jet_2_tau_1hdata305->SetBinContent(5,241601);
   looseSel_Jet_2_tau_1hdata305->SetBinContent(6,159013);
   looseSel_Jet_2_tau_1hdata305->SetBinContent(7,99548);
   looseSel_Jet_2_tau_1hdata305->SetBinContent(8,56788);
   looseSel_Jet_2_tau_1hdata305->SetBinContent(9,27362);
   looseSel_Jet_2_tau_1hdata305->SetBinContent(10,9793);
   looseSel_Jet_2_tau_1hdata305->SetBinContent(11,1834);
   looseSel_Jet_2_tau_1hdata305->SetBinContent(12,133);
   looseSel_Jet_2_tau_1hdata305->SetBinContent(13,3);
   looseSel_Jet_2_tau_1hdata305->SetBinError(1,34.24909);
   looseSel_Jet_2_tau_1hdata305->SetBinError(2,315.1047);
   looseSel_Jet_2_tau_1hdata305->SetBinError(3,564.8814);
   looseSel_Jet_2_tau_1hdata305->SetBinError(4,580.1362);
   looseSel_Jet_2_tau_1hdata305->SetBinError(5,491.5292);
   looseSel_Jet_2_tau_1hdata305->SetBinError(6,398.7643);
   looseSel_Jet_2_tau_1hdata305->SetBinError(7,315.5123);
   looseSel_Jet_2_tau_1hdata305->SetBinError(8,238.3023);
   looseSel_Jet_2_tau_1hdata305->SetBinError(9,165.4146);
   looseSel_Jet_2_tau_1hdata305->SetBinError(10,98.95959);
   looseSel_Jet_2_tau_1hdata305->SetBinError(11,42.82523);
   looseSel_Jet_2_tau_1hdata305->SetBinError(12,11.53256);
   looseSel_Jet_2_tau_1hdata305->SetBinError(13,1.732051);
   looseSel_Jet_2_tau_1hdata305->SetMinimum(0);
   looseSel_Jet_2_tau_1hdata305->SetMaximum(673116);
   looseSel_Jet_2_tau_1hdata305->SetEntries(1352188);
   looseSel_Jet_2_tau_1hdata305->SetDirectory(0);

   ci = TColor::GetColor("#ff9900");
   looseSel_Jet_2_tau_1hdata305->SetFillColor(ci);
   looseSel_Jet_2_tau_1hdata305->SetLineWidth(2);
   looseSel_Jet_2_tau_1hdata305->SetMarkerStyle(20);
   looseSel_Jet_2_tau_1hdata305->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   looseSel_Jet_2_tau_1hdata305->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hdata305->GetXaxis()->SetLabelSize(0);
   looseSel_Jet_2_tau_1hdata305->GetXaxis()->SetTitleSize(0);
   looseSel_Jet_2_tau_1hdata305->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hdata305->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_2_tau_1hdata305->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hdata305->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hdata305->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hdata305->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hdata305->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hdata305->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hdata305->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hdata305->Draw("EPSAME");
   
   TLegend *leg = new TLegend(0.6084422,0.4798951,0.9174874,0.8295455,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("looseSel_Jet_2_tau_1hdata","Data (2017)","LEP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("looseSel_Jet_2_tau_1hqcd","QCD Pythia8","F");
   entry->SetFillColor(36);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("looseSel_Jet_2_tau_1hherwig","         Herwig++","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(9);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("looseSel_Jet_2_tau_1hmg","         MadGraph+Pythia8","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP17_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc","t#bar{t}","F");
   entry->SetFillColor(47);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP17_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc","W+jets","F");
   entry->SetFillColor(21);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP17_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc","Z+jets","F");

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
   entry=leg->AddEntry("resCP17_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig","W'(2 TeV)#rightarrowWZ","L");

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP17_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig","G_{Bulk}(2 TeV)#rightarrowWW","L");

   ci = TColor::GetColor("#ff6600");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP17_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig","G_{Bulk}(2 TeV)#rightarrowZZ","L");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(4);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.96,0.904,"(2017) 41.4 fb^{-1}(13 TeV)");
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
   
   TH1D *looseSel_Jet_2_tau_1hdata_copy306 = new TH1D("looseSel_Jet_2_tau_1hdata_copy306","",20,0,1);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinContent(1,1173);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinContent(2,99291);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinContent(3,319091);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinContent(4,336558);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinContent(5,241601);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinContent(6,159013);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinContent(7,99548);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinContent(8,56788);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinContent(9,27362);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinContent(10,9793);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinContent(11,1834);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinContent(12,133);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinContent(13,3);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinError(1,34.24909);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinError(2,315.1047);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinError(3,564.8814);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinError(4,580.1362);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinError(5,491.5292);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinError(6,398.7643);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinError(7,315.5123);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinError(8,238.3023);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinError(9,165.4146);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinError(10,98.95959);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinError(11,42.82523);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinError(12,11.53256);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinError(13,1.732051);
   looseSel_Jet_2_tau_1hdata_copy306->SetMinimum(0);
   looseSel_Jet_2_tau_1hdata_copy306->SetMaximum(673116);
   looseSel_Jet_2_tau_1hdata_copy306->SetEntries(1352188);
   looseSel_Jet_2_tau_1hdata_copy306->SetDirectory(0);

   ci = TColor::GetColor("#ff9900");
   looseSel_Jet_2_tau_1hdata_copy306->SetFillColor(ci);
   looseSel_Jet_2_tau_1hdata_copy306->SetLineWidth(2);
   looseSel_Jet_2_tau_1hdata_copy306->SetMarkerStyle(20);
   looseSel_Jet_2_tau_1hdata_copy306->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   looseSel_Jet_2_tau_1hdata_copy306->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hdata_copy306->GetXaxis()->SetLabelSize(0);
   looseSel_Jet_2_tau_1hdata_copy306->GetXaxis()->SetTitleSize(0);
   looseSel_Jet_2_tau_1hdata_copy306->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hdata_copy306->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_2_tau_1hdata_copy306->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hdata_copy306->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hdata_copy306->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hdata_copy306->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hdata_copy306->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hdata_copy306->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hdata_copy306->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hdata_copy306->Draw("sameaxis");
   c1_2->Modified();
   looseSel_Jet_2_tau_1->cd();
   looseSel_Jet_2_tau_1->Modified();
   looseSel_Jet_2_tau_1->cd();
   looseSel_Jet_2_tau_1->SetSelected(looseSel_Jet_2_tau_1);
}
